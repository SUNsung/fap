
        
              # Returns an array of all available build trains (not the builds they include)
      def get_build_trains(app_id: nil, platform: 'ios')
        assert_required_params(__method__, binding)
    
      context '#builds_for_group' do
    it 'executes the request' do
      MockAPI::TestFlightServer.get('/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/builds') {}
      subject.builds_for_group(app_id: app_id, group_id: 'fake-group-id')
      expect(WebMock).to have_requested(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/builds')
    end
  end
    
          #   # First, stub a failing request
      #   stub_request(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/1234/apps/898536088/platforms/ios/trains').
      #     # to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains_operation_failed.json'), headers: { 'Content-Type' => 'application/json' }).times(2).
      #     to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains.json'), headers: { 'Content-Type' => 'application/json' })
    
          def self.author
        'KrauseFx'
      end
    
        def itc_stub_set_preorder_cleared
      stub_request(:post, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/pricing/intervals').
        with(body: JSON.parse(itc_read_fixture_file(File.join('availability', 'set_preorder_cleared_request.json'))).to_json).
        to_return(status: 200, body: itc_read_fixture_file(File.join('availability', 'set_preorder_cleared_response.json')),
                  headers: { 'Content-Type' => 'application/json' })
    end
    
    full_params = ARGV.shelljoin
    
      before_action :set_account
  before_action :set_statuses
    
        def destroy
      authorize @domain_block, :destroy?
      UnblockDomainService.new.call(@domain_block, retroactive_unblock?)
      log_action :destroy, @domain_block
      redirect_to admin_domain_blocks_path, notice: I18n.t('admin.domain_blocks.destroyed_msg')
    end
    
      private
    
    require 'sass/version'