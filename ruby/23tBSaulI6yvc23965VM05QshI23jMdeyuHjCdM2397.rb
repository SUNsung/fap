
        
        module Gitlab
  module GithubImport
    module Caching
      # The default timeout of the cache keys.
      TIMEOUT = 24.hours.to_i
    
    module Gitlab
  module GithubImport
    module Representation
      class User
        include ToHash
        include ExposeAttribute
    
            if controller.content_type == 'text/html'
          action
        else
          '#{action} (#{controller.content_type})'
        end
      end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
          it 'succeeds' do
        expect { @controller.send(:reset_authentication_token) }.to_not raise_error
      end
    end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
      context 'with a logged in user' do
    before do
      sign_in alice
    end
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
            def new; end
    
            def normalize_params
          params[:order][:payments_attributes] = params[:order].delete(:payments) if params[:order][:payments]
          params[:order][:shipments_attributes] = params[:order].delete(:shipments) if params[:order][:shipments]
          params[:order][:line_items_attributes] = params[:order].delete(:line_items) if params[:order][:line_items]
          params[:order][:ship_address_attributes] = params[:order].delete(:ship_address) if params[:order][:ship_address]
          params[:order][:bill_address_attributes] = params[:order].delete(:bill_address) if params[:order][:bill_address]
        end
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
              after(:all) do
            puts @session
            Kernel.system 'tmux kill-session -t #{@session}'
          end