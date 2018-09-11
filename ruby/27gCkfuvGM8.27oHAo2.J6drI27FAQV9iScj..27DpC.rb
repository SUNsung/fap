
        
        ENV['RAILS_ENV'] ||= 'test'
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
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
    
            private
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)
    
    if RUBY_ENGINE == 'rbx'
  gem 'json'
  gem 'rubysl'
  gem 'rubysl-test-unit'
  gem 'erubi'
end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
              can_event = 'can_#{@event}?'
    
            def line_item_params
          params.require(:line_item).permit(:quantity, :variant_id, options: line_item_options)
        end
      end
    end
  end
end

    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def authorize_product!
          authorize! :read, @product
        end
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end