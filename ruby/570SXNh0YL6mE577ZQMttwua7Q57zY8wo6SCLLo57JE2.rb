
        
          test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
      class BareEmptyTest < ActiveSupport::TestCase
    test 'response body is nil' do
      controller = BareEmptyController.new
      controller.set_request!(ActionDispatch::Request.empty)
      controller.set_response!(BareController.make_response!(controller.request))
      controller.index
      assert_nil controller.response_body
    end
  end
    
      def test_parsing_json_doesnot_rescue_exception
    req = Class.new(ActionDispatch::Request) do
      def params_parsers
        { json: Proc.new { |data| raise Interrupt } }
      end
    
      class AssertMultipartSelectMailer < ActionMailer::Base
    def test(options)
      mail subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>' do |format|
        format.text { render plain: options[:text] }
        format.html { render plain: options[:html] }
      end
    end
  end
    
    module AccountFinderConcern
  extend ActiveSupport::Concern
    
    require_relative '../mastodon/snowflake'
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end
    
          it 'regenerates feed when sign in is older than two weeks' do
        get :show
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    unless $LOAD_PATH.include? lib_path
  $LOAD_PATH.unshift lib_path
end

    
    
  ['', 'www.'].each do |prefix|
    begin
      Timeout.timeout(10) do
        doc = Hpricot(URI.parse('http://#{prefix}#{site}/').open)
        doc.search('//form').each do |form|
    
        end # end of each_key
  end # end of parse
end
    
          case matched
        when :ok
          # Last command was successful, in addition most servers transmit a banner with the first +OK
          case s[:last]
            when nil
              # Its the first +OK must include the banner, worst case its just +OK
              s[:info]  = matches
              s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              report_service(s)
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
      %w(quiet silent verbose).each do |switch|
    it 'doesn't include --#{switch} in help' do
      expect(help_output).not_to match(/--#{switch}/)
    end
  end