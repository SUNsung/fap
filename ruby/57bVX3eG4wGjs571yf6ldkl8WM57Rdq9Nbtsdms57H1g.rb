
        
            should 'allow dots in the filename' do
      assert_equal '_with.dots', @collection.relative_directory
    end
    
        should 'acceptable limit post is 0' do
      clear_dest
      assert(
        fixture_site('limit_posts' => 0),
        'Couldn't create a site with limit_posts=0.'
      )
    end
  end
end

    
          def [](key)
        if key != 'posts' && @obj.collections.key?(key)
          @obj.collections[key].docs
        else
          super(key)
        end
      end
    
    def docs_folder
  'docs'
end
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
          # @return (String) Trade Representative Contact Information Postal Code
      attr_accessor :trade_representative_postal_code
    
            case bump_type
        when 'patch'
          patch += 1
        when 'minor'
          minor += 1
          patch = 0
        when 'major'
          major += 1
          minor = 0
          patch = 0
        end
    
          it 'returns the current version once parsed with prerelease' do
        test_content = 'spec.version = '1.3.2-SNAPSHOT''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2-SNAPSHOT')
        expect(@version_podspec_file.version_value).to eq('1.3.2-SNAPSHOT')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
        expect(@version_podspec_file.version_match[:prerelease]).to eq('SNAPSHOT')
      end
    
        # Override configuration for a specific lane. If received lane name does not
    # match the lane name available as environment variable, no changes will
    # be applied.
    #
    # @param lane_name Symbol representing a lane name.
    # @yield Block to run for overriding configuration values.
    #
    def for_lane(lane_name)
      if ENV['FASTLANE_LANE_NAME'] == lane_name.to_s
        with_a_clean_config_merged_when_complete do
          yield
        end
      end
    end
    
        it 'should fail to create a nil device UDID' do
      expect do
        Spaceship::Device.create!(name: 'Demo Device', udid: nil)
      end.to raise_error('You cannot create a device without a device_id (UDID) and name')
    end
    
          def self.example_code
        [
          'register_devices(
            devices: {
              'Luka iPhone 6' => '1234567890123456789012345678901234567890',
              'Felix iPad Air 2' => 'abcdefghijklmnopqrstvuwxyzabcdefghijklmn'
            }
          ) # Simply provide a list of devices as a Hash',
          'register_devices(
            devices_file: './devices.txt'
          ) # Alternatively provide a standard UDID export .txt file, see the Apple Sample (http://devimages.apple.com/downloads/devices/Multiple-Upload-Samples.zip)',
          'register_devices(
            devices_file: './devices.txt', # You must pass in either `devices_file` or `devices`.
            team_id: 'XXXXXXXXXX',         # Optional, if you're a member of multiple teams, then you need to pass the team ID here.
            username: 'luka@goonbee.com'   # Optional, lets you override the Apple Member Center username.
          )',
          'register_devices(
            devices: {
              'Luka MacBook' => '12345678-1234-1234-1234-123456789012',
              'Felix MacBook Pro' => 'ABCDEFGH-ABCD-ABCD-ABCD-ABCDEFGHIJKL'
            },
            platform: 'mac'
          ) # Register devices for Mac'
        ]
      end
    
            command = [
          command_prefix,
          'agvtool',
          'what-version',
          '-terse'
        ].join(' ')
    
            # The args we will build with
        # Maps nice developer build parameters to Shenzhen args
        build_args = params_to_build_args(params)
    
          self
    end
    
      def test_marshal_load_extended_class_crash
    assert_separately([], '#{<<-'begin;'}\n#{<<-'end;'}')
    begin;
      assert_raise_with_message(ArgumentError, /undefined/) do
        Marshal.load('\x04\be:\x0F\x00omparableo:\vObject\x00')
      end
    end;
  end
    
        def setup
      @obj = Object.new
    end
    
      it 'returns true when at EOF with the exact length of uncompressed data' do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read(10)
    gz.eof?.should be_true
  end
    
    describe 'GzipReader#pos' do
    
      if rss_url.nil?
    puts '#{name}: GETTING'
    rss_check_url = 'http://ajax.googleapis.com/ajax/services/feed/lookup?v=1.0&q=#{web_url}'
    uri = URI.parse(rss_check_url)
    response = JSON.parse(Net::HTTP.get(uri))
    rss_url = response['responseData']['url'] if response['responseData'] && response['responseData'].has_key?('url')
    
        return true unless resource&.otp_required_for_login?
    
      has_many :share_visibilities
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
      rescue_from Diaspora::NotMine do
    render plain: I18n.t('aspect_memberships.destroy.forbidden'), status: 403
  end
end

    
      private
    
      def index
    comments = comment_service.find_for_post(params[:post_id])
    respond_with do |format|
      format.json { render json: CommentPresenter.as_collection(comments), status: 200 }
      format.mobile { render layout: false, locals: {comments: comments} }
    end
  end
    
          attr_reader :key, :default, :options
    
          ServerKey = Struct.new(:hostname, :port)
    
          def untrusted!
        @trusted = false
        yield
      ensure
        @trusted = true
      end
    
          it { expect(self_class_node.body).to be(nil) }
    end
  end
end

    
              if node.blockarg_type?
            correct_for_blockarg_type(node)
          else
            lambda do |corrector|
              variable_name = if node.optarg_type?
                                node.node_parts[0]
                              else
                                # Extract only a var name without splat (`*`)
                                node.source.gsub(/\A\*+/, '')
                              end
              corrector.replace(node.loc.name, '_#{variable_name}')
            end
          end
        end
    
            # Returns true if running with --auto-correct would remove the braces
        # of the last argument.
        def braces_will_be_removed?(args)
          brace_config = config.for_cop('Style/BracesAroundHashParameters')
          return false unless brace_config.fetch('Enabled')
          return false if brace_config['AutoCorrect'] == false
    
      it 'does not register offense when guard clause is before `else`' do
    expect_no_offenses(<<~RUBY)
      def foo
        if cond
          return another_object if something_different?
        else
          bar
        end
      end
    RUBY
  end
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `block` node body is a void context
      def void_context?
        VOID_CONTEXT_METHODS.include?(method_name)
      end
    end
  end
end

    
          def formats
        super(:markdown)
      end
    
          def is_edit_page
        true
      end
    
          def mathjax_config
        @mathjax_config
      end
    
    exec         = {}
options      = {
  :port => 4567,
  :bind => '0.0.0.0',
}
wiki_options = {
  :live_preview  => false,
  :allow_uploads => false,
  :allow_editing => true,
}
    
        def not_found(msg = nil)
      @message = msg || 'The requested page does not exist.'
      status 404
      return mustache :error
    end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def product_property
          if @product
            @product_property ||= @product.product_properties.find_by(id: params[:id])
            @product_property ||= @product.product_properties.includes(:property).where(spree_properties: { name: params[:id] }).first
            raise ActiveRecord::RecordNotFound unless @product_property
    
            private
    
            def new
          authorize! :admin, ReturnAuthorization
        end