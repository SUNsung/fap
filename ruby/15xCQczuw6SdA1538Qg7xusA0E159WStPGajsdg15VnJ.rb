
        
          def test_key?
    assert_not_send([@cls[], :key?, 1])
    assert_not_send([@cls[], :key?, nil])
    assert_send([@h, :key?, nil])
    assert_send([@h, :key?, 1])
    assert_not_send([@h, :key?, 'gumby'])
  end
    
          ms = instance_methods(true).map {|sym| sym.to_s }
      ms.grep(/\Arefute_/) do |m|
        mname = ('assert_not_'.dup << m.to_s[/.*?_(.*)/, 1])
        alias_method(mname, m) unless ms.include? mname
      end
      alias assert_include assert_includes
      alias assert_not_include assert_not_includes
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
            # See if it's actually a masked token or not. We should be able
        # to handle any unmasked tokens that we've issued without error.
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
              react_and_close(env, body) or [status, headers, body]
        else
          [status, headers, body]
        end
      end
    
      subject { described_class.new(lambda {}) }
    
      it 'should allow setting CSP3 no arg directives' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => true, :disown_opener => true, :upgrade_insecure_requests => true