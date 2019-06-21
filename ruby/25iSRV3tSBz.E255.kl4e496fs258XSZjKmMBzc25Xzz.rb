
        
            def length
      @queue.length
    end
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
        def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
            it 'sets up metadata folder in fastlane folder' do
          expect(options[:metadata_path]).to eq('./fastlane/metadata')
        end
      end
    
        def slug
      @slug ||= subpath.sub(/\A\//, '').remove(/\.html\z/)
    end
    
        def initialize
      @pages = {}
    end
    
            def store_pages(store)
          instrument 'info.doc', msg: 'Fetching redirections...'
          with_redirections do
            instrument 'info.doc', msg: 'Continuing...'
            super
          end
        end
    
            doc
      end
    end
  end
end

    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
              node.before(node.children).remove
        end
    
        describe 'filter notifications' do
      it 'supports filtering by notification type' do
        FactoryGirl.create(:notification, :recipient => alice, :type => 'Notifications::StartedSharing')
        get :index, params: {type: 'started_sharing'}
        expect(assigns[:notifications].count).to eq(1)
      end
    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end
    
          it 'succeeds' do
        expect { @controller.send(:reset_authentication_token) }.to_not raise_error
      end
    end
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
          def format
        @format = (@page.format || false) if @format.nil?
        @format.to_s.downcase
      end
    end
  end
end

    
        get '/pages'
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body
    
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
    
          @@country_attributes = [:id, :iso_name, :iso, :iso3, :name, :numcode]
    
      private
    
      def create
    login(User.authenticate(params[:email_address], params[:password]))
    flash[:remember_login] = true
    redirect_to_with_return_to root_path
  rescue Postal::Errors::AuthenticationError => e
    flash.now[:alert] = 'The credentials you've provided are incorrect. Please check and try again.'
    render 'new'
  end