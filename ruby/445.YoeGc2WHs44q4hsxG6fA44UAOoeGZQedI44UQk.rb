
        
              expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
      def create_report!
    @report = @source_account.reports.create!(
      target_account: @target_account,
      status_ids: @status_ids,
      comment: @comment,
      uri: @options[:uri]
    )
  end
    
        mark_as_processing!
    
        service_stub = double
    allow(ActivityPub::FetchRemoteAccountService).to receive(:new).and_return(service_stub)
    allow(service_stub).to receive(:call).and_return(new_account)
  end
    
            it 'not calls erros.add' do
          expect(errors).not_to have_received(:add).with(:username, any_args)
        end
      end
    end
  end
end
