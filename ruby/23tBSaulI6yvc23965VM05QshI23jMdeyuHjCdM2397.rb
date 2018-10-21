
        
            context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
            context 'when the schema_version is less than 1' do
          it 'translates keep_events_for from days to seconds' do
            valid_parsed_data.delete(:schema_version)
            valid_parsed_data[:agents] = [valid_parsed_weather_agent_data.merge(keep_events_for: 5)]
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
      platform_is :windows do
    it 'runs commands starting with any number of @ using shell' do
      `#{ruby_cmd('p system 'does_not_exist'')} 2>NUL`.chomp.should == 'nil'
      @object.system('@does_not_exist 2>NUL').should == false
      @object.system('@@@#{ruby_cmd('exit 0')}').should == true
    end
  end
end
    
        after :each do
      @tmp_file.close
      rm_r @tmp_file
    end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
      desc 'Install all spree gems'
  task install: :build do
    for_each_gem do |gem_path|
      Bundler.with_clean_env do
        sh 'gem install #{gem_path}'
      end
    end
  end
    
          def error_during_processing(exception)
        Rails.logger.error exception.message
        Rails.logger.error exception.backtrace.join('\n')
    
            def show
          respond_with(@property)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end