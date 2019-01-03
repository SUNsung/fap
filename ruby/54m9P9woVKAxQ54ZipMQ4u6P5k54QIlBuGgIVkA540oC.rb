
        
                      if accept
                html_options[option] = true
              elsif option == :checked
                html_options[option] = false
              end
            end
    
          private
    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
          def prepend_formats(formats) # :doc:
        formats = Array(formats)
        return if formats.empty? || @lookup_context.html_fallback_for_js
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
        context 'when an the exception is raised' do
      before do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
      end
    
        it 'marks a notification as unread if it is told to' do
      note = FactoryGirl.create(:notification)
      expect(Notification).to receive(:where).and_return([note])
      expect(note).to receive(:set_read_state).with(false)
      get :update, params: {id: note.id, set_unread: 'true'}, format: :json
    end
    
      run_vagrant_command(symlinked?(TestApp.current_path, specific_release_path))
end

    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end