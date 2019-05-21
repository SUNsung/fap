
        
                def collection_method
          :pull_requests_comments
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
            def issuable_type
          pull_request? ? 'MergeRequest' : 'Issue'
        end
      end
    end
  end
end

    
      after(:each) do
    @rufus_scheduler.shutdown(:wait)
  end
    
        it 'should work with nested hashes' do
      @agent.options['very'] = {'nested' => '$.value'}
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'very' => {'nested' => '{{value}}'}, 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
        def set_report_note
      @report_note = ReportNote.find(params[:id])
    end
  end
end

    
        render_empty
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      def apply_header_reset
    response.headers['X-RateLimit-Reset'] = rate_limit_reset
  end
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end
    
            def message(variable)
          message = 'Unused #{variable_type(variable)} - `#{variable.name}`.'