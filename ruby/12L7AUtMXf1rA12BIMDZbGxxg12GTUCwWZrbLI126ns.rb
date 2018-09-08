
        
                def username_and_email
          @username_and_email ||= begin
            username  = get_info(:username).presence || get_info(:nickname).presence
            email     = get_info(:email).presence
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def status
          @project.pipelines
            .where(sha: @sha)
            .latest_status(@ref) || 'unknown'
        end
    
            def value_color
          STATUS_COLOR[@status.to_sym] || STATUS_COLOR[:unknown]
        end
      end
    end
  end
end

    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)