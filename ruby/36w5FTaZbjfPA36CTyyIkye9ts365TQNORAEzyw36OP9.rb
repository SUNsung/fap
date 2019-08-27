
        
            def can_send_rejection_email?(email, type)
      return false if @receiver.sent_to_mailinglist_mirror?
      return true if type == :email_reject_unrecognized_error
    
      def perform
    args = { version: params[:version].to_i }
    
        describe 'when image is not authorized' do
      describe 'when image is for site setting' do
        let(:filename) { 'logo.png' }
        let(:file) { file_from_fixtures(filename) }
    
            it 'removes the file from s3 on multisite' do
          test_multisite_connection('default') do
            upload = build_upload
            store.expects(:get_depth_for).with(upload.id).returns(0)
            s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
            upload.update!(url: '//s3-upload-bucket.s3.dualstack.us-west-1.amazonaws.com/discourse-uploads/uploads/default/original/1X/#{upload.sha1}.png')
            s3_object = stub
    
        if text = I18n.t('reviewables.reasons.#{object.reason}', base_url: Discourse.base_url, default: nil)
      # Create a convenient link to any site settings if the user is staff
      settings_url = '#{Discourse.base_url}/admin/site_settings/category/all_results?filter='
    
          templates = TemplateFinder.build(:licenses, nil, popular: popular).execute
    
              entries = @repository.tree(:head, dir).entries
    
            raise ClaimInvalid, 'Missing required 'iat' claim' if options.valid_within && !@decoded['iat']
    
              access_requester = source.requesters.find_by!(user_id: params[:user_id])
          member = ::Members::ApproveAccessRequestService
            .new(current_user, declared_params)
            .execute(access_requester)
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          def handle_jwt_bearer(req)
        jwt_string = req['client_assertion']
        jwt = JSON::JWT.decode jwt_string, :skip_verification
        o_auth_app = Api::OpenidConnect::OAuthApplication.find_by(client_id: jwt['iss'])
        raise Rack::OAuth2::Server::Authorize::BadRequest(:invalid_request) unless o_auth_app
        public_key = fetch_public_key(o_auth_app, jwt)
        JSON::JWT.decode(jwt_string, JSON::JWK.new(public_key).to_key)
        req.update_param('client_id', o_auth_app.client_id)
        req.update_param('client_secret', o_auth_app.client_secret)
      end
    
      def set_up_contacts_mobile
    @contacts = case params[:set]
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'all'
        current_user.contacts
      else
        if params[:a_id]
          @aspect = current_user.aspects.find(params[:a_id])
          @aspect.contacts
        else
          current_user.contacts.receiving
        end
    end
    @contacts = @contacts.for_a_stream.paginate(:page => params[:page], :per_page => 25)
    @contacts_size = @contacts.length
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    require 'minitest/autorun'
    
          q = Sidekiq::Queue.new('foo')
      job = q.first
      assert_equal 'foo', job['queue']
      assert_equal 12, job['retry']
    end
    
        it 'can clear retries' do
      add_retry
      add_retry('test')
      r = Sidekiq::RetrySet.new
      assert_equal 2, r.size
      r.clear
      assert_equal 0, r.size
    end
    
      describe 'poller' do
    before do
      Sidekiq.redis{|c| c.flushdb}
      @error_1  = { 'class' => ScheduledWorker.name, 'args' => [0], 'queue' => 'queue_1' }
      @error_2  = { 'class' => ScheduledWorker.name, 'args' => [1], 'queue' => 'queue_2' }
      @error_3  = { 'class' => ScheduledWorker.name, 'args' => [2], 'queue' => 'queue_3' }
      @future_1 = { 'class' => ScheduledWorker.name, 'args' => [3], 'queue' => 'queue_4' }
      @future_2 = { 'class' => ScheduledWorker.name, 'args' => [4], 'queue' => 'queue_5' }
      @future_3 = { 'class' => ScheduledWorker.name, 'args' => [5], 'queue' => 'queue_6' }