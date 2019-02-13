
        
                  def render_component(builder)
            builder.translation
          end
      end
    end
  end
end

    
            # If no layout is supplied, look for a template named the return
        # value of this method.
        #
        # ==== Returns
        # * <tt>String</tt> - A template name
        def _implied_layout_name
          controller_path
        end
    end
    
        def exists?(path, prefixes, *args)
      find_all(path, prefixes, *args).any?
    end
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
        def did_show_message?
      file_name = '.did_show_opt_info'
    
          it 'adds create_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            create_docset: true
          )
        end').runner.execute(:test)
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
      protected
    
      def unknown_action!(msg)
    logger.debug '[Devise] #{msg}' if logger
    raise AbstractController::ActionNotFound, msg
  end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          if failed_attributes.any?
        fail Devise::Models::MissingAttribute.new(failed_attributes)
      end
    end
    
            context 'with nested resources' do
          before { get '/api/v2/storefront/products/#{product.id}?include=option_types,option_types.option_values' }
    
          it 'returns account data with included default billing and shipping addresses' do
        expect(json_response['included']).to    include(have_type('address'))
        expect(json_response['included'][0]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.billing_address).as_json['data'])
        expect(json_response['included'][1]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.shipping_address).as_json['data'])
      end
    end
    
          it_behaves_like 'no current order'
    end
  end
    
          it_behaves_like 'returns valid cart JSON'
    end
    
      desc 'Install all spree gems'
  task install: :build do
    for_each_gem do |gem_path|
      Bundler.with_clean_env do
        sh 'gem install #{gem_path}'
      end
    end
  end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end