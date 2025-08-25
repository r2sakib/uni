using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Data.SqlTypes;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;

namespace WindowsFormsApp2
{
    public partial class EditProfile : Form

    {
        string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\NoteApp.mdf;Integrated Security=True;Connect Timeout=30";

        private bool isUsernameValid = false;
        private Button btnConfirm;
        private readonly Color originalBtnBackColor = Color.RoyalBlue;
        private readonly Color originalBtnForeColor = Color.White;
        private readonly Color originalBtnBorderColor = Color.RoyalBlue;

       
        private bool isPasswordValid = false;
        private bool isEmailValid = false;
        private bool isNameValid = false;


        public EditProfile()
        {
            InitializeComponent();

            btnConfirm = new Button();
            btnConfirm.Name = "btnConfirm";
            btnConfirm.Text = "Confirm";
            btnConfirm.Size = new Size(252, 41);
            btnConfirm.Location = new Point(113, 531);
            btnConfirm.Font = new Font("Segoe UI", 10, FontStyle.Bold);

            btnConfirm.BackColor = originalBtnBackColor;
            btnConfirm.ForeColor = originalBtnForeColor;

            btnConfirm.FlatStyle = FlatStyle.Popup;
            btnConfirm.FlatAppearance.BorderColor = originalBtnBorderColor;
            btnConfirm.FlatAppearance.BorderSize = 1;
            btnConfirm.Enabled = false;
            btnConfirm.Click += btnConfirm_Click;
            btnConfirm.MouseEnter += btn_MouseEnter;
            btnConfirm.MouseLeave += btn_MouseLeave;
            this.Controls.Add(btnConfirm);
            UpdateButtonAppearance();


            txtPassword.UseSystemPasswordChar = true;
            checkBox1.Checked = false;
            lblPassword.Text = "Must be at least 7 characters with uppercase, lowercase, number, and special character.";
            lblPassword.Visible = false;
            lblEmail.Visible = false;
            lblUsername.Visible = false;
            lblName.Visible = false;
            btnConfirm.Enabled = false;
        }

        private void btn_MouseEnter(object sender, EventArgs e)
        {
            Button button = sender as Button;
            if (button.Enabled)
            {
                button.BackColor = Color.MidnightBlue;
                button.ForeColor = Color.White;
                Cursor = Cursors.Hand;
            }
        }

        private void btn_MouseLeave(object sender, EventArgs e)
        {
            Button button = sender as Button;
            if (button.Enabled)
            {
                button.BackColor = Color.RoyalBlue;
                button.ForeColor = Color.White;
                Cursor = Cursors.Default;
            }
        }



        private void ValidateForm()
        {
            btnConfirm.Enabled = isUsernameValid && isPasswordValid && isEmailValid && isNameValid;
            UpdateButtonAppearance();
        }

        private void txtUsername_TextChanged_1(object sender, EventArgs e)
        {
            string username = txtUsername.Text.Trim();

            if (string.IsNullOrWhiteSpace(username))
            {
                lblUsername.Visible = false;
                isUsernameValid = false;
                return;
            }
            else
            {
                using (SqlConnection conn = new SqlConnection(connectionString))
                {
                    string query = "SELECT COUNT(*) FROM [User] WHERE Username = @Username";
                    SqlCommand cmd = new SqlCommand(query, conn);
                    cmd.Parameters.AddWithValue("@Username", username);


                    conn.Open();
                    int count = (int)cmd.ExecuteScalar();
                    conn.Close();

                    if (count > 0)
                    {
                        lblUsername.Text = "Username exists";
                        lblUsername.ForeColor = Color.Red;
                        lblUsername.Visible = true;
                        isUsernameValid = false;
                    }
                    else
                    {
                        lblUsername.Text = "Username available";
                        lblUsername.ForeColor = Color.Green;
                        lblUsername.Visible = true;
                        isUsernameValid = true;
                    }

                }
            }
            ValidateForm();
        }

        private void txtName_TextChanged(object sender, EventArgs e)
        {
            string name = txtName.Text.Trim();

            if (string.IsNullOrWhiteSpace(name))
            {
                lblName.Visible = false;
                isNameValid = false;
            }

            else
            {
                lblName.Visible = false;
                isNameValid = true;
            }
            ValidateForm();

        }
        private void txtPassword_TextChanged_1(object sender, EventArgs e)
        {
            string password = txtPassword.Text;
            string pattern = @"^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{7,}$";
            lblPassword.Visible = true;
            if (string.IsNullOrWhiteSpace(password))
            {
                lblPassword.Visible = false;
                isPasswordValid = false;
            }
            else if (Regex.IsMatch(password, pattern))
            {
                lblPassword.Text = "Strong password.";
                lblPassword.ForeColor = Color.Green;
                isPasswordValid = true;
                lblPassword.Visible = true;

            }
            else
            {
                lblPassword.Text = "Must be at least 7 characters with uppercase,\nlowercase, number, and special character.";
                lblPassword.ForeColor = Color.Red;
                lblPassword.Visible = true;
                isPasswordValid = false;

            }
            ValidateForm();

        }

        private void checkBox1_CheckedChanged_1(object sender, EventArgs e)
        {
            txtPassword.UseSystemPasswordChar = !checkBox1.Checked;
        }



        private void txtEmail_TextChanged(object sender, EventArgs e)
        {
            string email = txtEmail.Text;
            string pattern = @"^[^@\s]+@(gmail\.com|outlook\.com|yahoo.com|outlook.com|icloud.com|student.aiub.edu)$";
            //lblEmail.Visible = true;
            if (string.IsNullOrWhiteSpace(email))
            {
                lblEmail.Visible = false;
                isEmailValid = false;
            }
            else if (!Regex.IsMatch(email, pattern))
            {

                lblEmail.Text = "Please input a valid address.";
                lblEmail.ForeColor = Color.Red;
                lblEmail.Visible = true;
                isEmailValid = false;

            }
            else
            {
                lblEmail.Visible = false;
                isEmailValid = true;
            }
            ValidateForm();
        }


        private void UpdateButtonAppearance()
        {
            if (btnConfirm.Enabled)
            {

                btnConfirm.BackColor = originalBtnBackColor;
                btnConfirm.ForeColor = originalBtnForeColor;
                btnConfirm.FlatAppearance.BorderColor = originalBtnBorderColor;
                btnConfirm.Cursor = Cursors.Hand;
            }
            else
            {

                btnConfirm.BackColor = Color.Gray;
                btnConfirm.ForeColor = Color.White;
                btnConfirm.FlatAppearance.BorderColor = Color.Gray;
                btnConfirm.Cursor = Cursors.Default;
            }
        }

        

        private void btnBack_Click_1(object sender, EventArgs e)
        {
            frmHomePage hp = new frmHomePage();
            hp.Show();
            this.Hide();
        }



        private void btnConfirm_Click(object sender, EventArgs e)
        {
            if (!isUsernameValid || !isPasswordValid || !isEmailValid || !isNameValid)
            {
                MessageBox.Show("Please fill all fields correctly before submitting.");
                return;
            }

            try
            {
                using (SqlConnection conn = new SqlConnection(connectionString))
                {
                    string query = "INSERT INTO [User] (Name, Username, Password, Email) VALUES (@Name, @Username, @Password, @Email)";
                    using (SqlCommand cmd = new SqlCommand(query, conn))
                    {
                        cmd.Parameters.AddWithValue("@Name", txtName.Text.Trim());
                        cmd.Parameters.AddWithValue("@Username", txtUsername.Text.Trim());
                        cmd.Parameters.AddWithValue("@Password", txtPassword.Text);
                        cmd.Parameters.AddWithValue("@Email", txtEmail.Text.Trim());

                        conn.Open();
                        int rowsAffected = cmd.ExecuteNonQuery();
                        conn.Close();

                        if (rowsAffected > 0)
                        {
                            MessageBox.Show("Account created successfully!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                            txtName.Clear();
                            txtUsername.Clear();
                            txtPassword.Clear();
                            txtEmail.Clear();
                        }
                        else
                        {
                            MessageBox.Show("Account creation failed. Please try again.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        }
                    }
                }
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Database error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Unexpected error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void lblPassword_Click(object sender, EventArgs e)
        {

        }

        private void lblUsername_Click(object sender, EventArgs e)
        {

        }

        private void lblName_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}