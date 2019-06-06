
        
              if @actions_requiring_special_handling.include?(action_name)
        command_return = run_action_requiring_special_handling(
          command: command,
          parameter_map: parameter_map,
          action_return_type: action_class_ref.return_type
        )
        return command_return
      end
    
          it 'updates with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'update',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
        os = 'windows'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
    
        at_exit do
      exit_code = $ERROR_INFO.nil? ? 0 : $ERROR_INFO.status
      $stdout.reopen('/dev/null')
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
        define_method provider do
      @user = User.find_for_oauth(request.env['omniauth.auth'], current_user)
    
          def format
        @format = (@page.format || false) if @format.nil? && @page
        @format.to_s.downcase
      end
    
          def extract_renamed_path_destination(file)
        return file.gsub(/{.* => (.*)}/, '\1').gsub(/.* => (.*)/, '\1')
      end
    
        get '/pages'
    
      option '--validate', :flag, 'Validate with pkg install',
    :default => true
    
          if !attributes[:pacman_group].nil?
        if attributes[:pacman_group] == 'root'
          data_tar_flags += [ '--numeric-owner', '--group', '0' ]
        else
          data_tar_flags += [ '--group', attributes[:deb_group] ]
        end
      end
    end
    return data_tar_flags
  end # def data_tar_flags