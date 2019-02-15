
        
                @octokit.connection_options[:ssl] = { verify: verify_ssl }
    
            def representation_class
          Representation::Issue
        end
    
            attr_reader :attributes
    
        reversible(&method(:up_down))
  end
    
              expect {
            get :create, params: valid_params.merge(invite: {token: code.token})
          }.to change { code.reload.count }.by(-1)
        end
    
          it 'returns reshares without login' do
        bob.reshare!(@post)
        sign_out :user
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@post.reshares.map(&:id))
      end
    end
  end
end

    
      namespace :install do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build and install #{gem} as local gem'
      task gem => package(gem, '.gem') do
        sh 'gem install #{package(gem, '.gem')}'
      end
    end
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def footer_format
        has_footer && @footer.format.to_s
      end
    
        get '/pages'
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
          # Returns the body of the `when` node.
      #
      # @return [Node, nil] the body of the `when` node
      def body
        node_parts[-1]
      end
    end
  end
end
