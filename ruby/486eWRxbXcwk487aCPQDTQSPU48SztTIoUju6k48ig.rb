
        
                def render
          options = @options.stringify_keys
          options['type']     = 'checkbox'
          options['value']    = @checked_value
          options['checked'] = 'checked' if input_checked?(options)
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
          def line_number
        @line_number ||=
          if file_name
            regexp = /#{Regexp.escape File.basename(file_name)}:(\d+)/
            $1 if message =~ regexp || backtrace.find { |line| line =~ regexp }
          end
      end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
            code = InvitationCode.create(user: bob)
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end