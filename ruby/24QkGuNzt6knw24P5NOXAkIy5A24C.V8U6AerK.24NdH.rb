
        
              expect(a).to_not eq(b)
    end
    
            it 'should not attempt to install a plugin' do
          expect(plugin_manager).not_to receive(:install_plugin)
          expect(instance.send(:process_configured_plugins)).to eq(local_installed_plugins)
        end
      end
    
        context 'local box metadata file' do
      let(:data_path) { double(:data_path) }
      let(:meta_file) { double(:meta_file) }
      let(:box_version) { '2.0' }
    
                errors << I18n.t('vagrant.general.batch_unexpected_error',
                             machine: thread[:machine].name,
                             message: message)
          else
            errors << I18n.t('vagrant.general.batch_vagrant_error',
                             machine: thread[:machine].name,
                             message: thread[:error].message)
          end
        end
      end
    
          after_triggers = triggers.after_triggers
      expect(after_triggers.size).to eq(3)
      subject.send(:filter_triggers, after_triggers, 'ubuntu-guest', :action)
      expect(after_triggers.size).to eq(3)
    end
  end
    
          # Invalid entry because that specific machine doesn't exist anymore.
      entryB_env = isolated_environment
      entryB_env.vagrantfile('')
      entryB = new_entry('B')
      entryB.vagrantfile_path = entryB_env.workdir
      locked = iso_env.machine_index.set(entryB)
      iso_env.machine_index.release(locked)
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
    allow(machine).to receive(:guest).and_return(guest)
    allow(machine.guest).to receive(:ready?).and_return(true)
    allow(machine).to receive(:config).and_return(config)
    allow(config).to receive(:vm).and_return(vm)
    allow(ui).to receive(:info)
  end
    
    Struct.new('Blog', :name, :web_url, :rss_url)
blogs = []
    
        if params[:user][:otp_attempt].present? && session[:otp_user_id]
      authenticate_with_two_factor_via_otp(resource)
    else
      strategy = Warden::Strategies[:database_authenticatable].new(warden.env, :user)
      prompt_for_two_factor(strategy.user) if strategy.valid? && strategy._run!.successful?
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        session[:valid_email_invites] = valid_emails
    session[:invalid_email_invites] = invalid_emails
    
      def read_all
    current_type = types[params[:type]]
    notifications = Notification.where(recipient_id: current_user.id, unread: true)
    notifications = notifications.where(type: current_type) if params[:type]
    notifications.update_all(unread: false)
    respond_to do |format|
      if current_user.unread_notifications.count > 0
        format.html { redirect_to notifications_path }
        format.mobile { redirect_to notifications_path }
      else
        format.html { redirect_to stream_path }
        format.mobile { redirect_to stream_path }
      end
      format.xml { render :xml => {}.to_xml }
      format.json { render :json => {}.to_json }
    end
  end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          def fetch_for(key, default, &block)
        block ? values.fetch(key, &block) : values.fetch(key, default)
      end
    
          def all_gem_names
        core_gem_names + plugin_gem_names
      end
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
    module Gollum
  VERSION = '4.1.4'
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
    end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end