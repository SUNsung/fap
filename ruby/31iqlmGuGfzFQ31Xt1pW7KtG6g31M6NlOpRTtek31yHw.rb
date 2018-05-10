
        
                adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
            def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
        response = ActionDispatch::TestResponse.create(200, { 'Content-Type' => 'application/json' }, '{ 'foo': 'fighters' }')
    assert_equal({ 'foo' => 'fighters' }, response.parsed_body)
  end
    
    module MiddlewareTest
  class MyMiddleware
    def initialize(app)
      @app = app
    end
    
    module ActionMailer
  # This module handles everything related to mail delivery, from registering
  # new delivery methods to configuring the mail object to be sent.
  module DeliveryMethods
    extend ActiveSupport::Concern
    
        include Behavior
  end
end

    
        assert_equal(2, @logger.logged(:debug).size)
    assert_match(/BaseMailer#welcome: processed outbound mail in [\d.]+ms/, @logger.logged(:debug).first)
    assert_match(/Welcome/, @logger.logged(:debug).second)
  ensure
    BaseMailer.deliveries.clear
  end
    
    class MailerHelperTest < ActionMailer::TestCase
  def test_use_mail_helper
    mail = HelperMailer.use_mail_helper
    assert_match %r{  But soft!}, mail.body.encoded
    assert_match %r{east, and\r\n  Juliet}, mail.body.encoded
  end
    
        def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
    map = {}
dups = []
    
    # puts '\nDone.'

    
          def initialize(*args, &block)
        @bypass_confirmation_postpone = false
        @skip_reconfirmation_in_callback = false
        @reconfirmation_required = false
        @skip_confirmation_notification = false
        @raw_confirmation_token = nil
        super
      end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
              # Method
          name = node.at_css('.header').content.split.first
    
    ###
### methods
###