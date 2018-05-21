
        
          </body>
</html>
HTML
    
          should 'respect front matter defaults' do
        assert_nil @page.data['title']
        assert_equal 'John Doe', @page.data['author']
        assert_equal 'default', @page.data['layout']
      end
    end
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
        # Gets the path to this layout relative to its base
    attr_reader :relative_path
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
        def find_remote(username, domain)
      AccountFinder.new(username, domain).account
    end
  end
    
      def icon
    object.image
  end
    
        File.write(dest, Oj.dump(map))
    puts 'Wrote emojo to destination! (#{dest})'
  end
end

    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end