
        
            if options['recipients'].present?
      emails = options['recipients']
      emails = [emails] if emails.is_a?(String)
      unless emails.all? { |email| email =~ Devise.email_regexp || email =~ /\{/ }
        errors.add(:base, ''when provided, 'recipients' should be an email address or an array of email addresses')
      end
    end
  end
    }
    
      delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
        def terminate_thread!
      if thread
        thread.instance_eval { ActiveRecord::Base.connection_pool.release_connection }
        thread.wakeup if thread.status == 'sleep'
        thread.terminate
      end
    end
    
      private
    
        respond_to do |format|
      format.html
      format.json {
        send_data Utils.pretty_jsonify(@user_credentials.limit(nil).as_json), disposition: 'attachment'
      }
    end
  end
    
          def key?(key)
        super(convert_key(key))
      end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
                when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end