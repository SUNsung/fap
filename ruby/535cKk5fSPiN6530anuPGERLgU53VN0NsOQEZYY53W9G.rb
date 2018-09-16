
        
          # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
        s = 'This formula is keg-only, which means it was not symlinked into #{HOMEBREW_PREFIX}.'
    s << '\n\n#{f.keg_only_reason}'
    if f.lib.directory? || f.include.directory?
      s <<
        <<-EOS.undent_________________________________________________________72
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
                # The current row includes screenshots for all device types
            # so we need to enable scaling for both iOS and watchOS apps
            device_language_details['scaled']['value'] = true if device_language_details['scaled']
            device_language_details['messagesScaled']['value'] = true if device_language_details['messagesScaled']
            # we unset `scaled` or `messagesScaled` as soon as we upload a
            # screenshot for this device/language combination
          end
        end
    
            client.create_version!(apple_id, version_number, platform.nil? ? 'ios' : platform)
    
    def du_uploadtrailer_preview_correct_jpg
  mock_jpg = double
  allow(mock_jpg).to receive(:file_name).and_return('ftl_FAKEMD5_trailer-en-US_preview.jpg')
  allow(mock_jpg).to receive(:file_size).and_return(12_345)
  allow(mock_jpg).to receive(:content_type).and_return('image/jpg')
  allow(mock_jpg).to receive(:bytes).and_return('trailer preview...')
  mock_jpg
end
    
      context '#post_tester_to_group' do
    it 'executes the request' do
      MockAPI::TestFlightServer.post('/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/testers') {}
      tester = OpenStruct.new({ first_name: 'Josh', last_name: 'Taquitos', email: 'taquitos@google.com' })
      subject.post_tester_to_group(app_id: app_id,
                                    email: tester.email,
                               first_name: tester.first_name,
                                last_name: tester.last_name,
                                 group_id: 'fake-group-id')
      expect(WebMock).to have_requested(:post, 'https://appstoreconnect.apple.com/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/testers').
        with(body: '[{'email':'taquitos@google.com','firstName':'Josh','lastName':'Taquitos'}]')
    end
  end
    
          it 'none' do
        val = @v.raw_data['ratings']['nonBooleanDescriptors'].find do |a|
          a['name'].include?('GAMBLING')
        end
        expect(val['level']).to eq('ITC.apps.ratings.level.NONE')
      end
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
          def gateway_error(exception)
        @order.errors.add(:base, exception.message)
        invalid_resource!(@order)
      end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            private
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
          authorize! :read, @order, order_token
        end
    
            def index
          if params[:ids]
            @products = product_scope.where(id: params[:ids].split(',').flatten)
          else
            @products = product_scope.ransack(params[:q]).result
          end