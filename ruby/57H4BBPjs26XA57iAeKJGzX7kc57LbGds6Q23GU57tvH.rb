
        
            it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
          it 'should not allow source agents owned by other people' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        agent.source_ids = [agents(:bob_weather_agent).id]
        expect(agent).to have(0).errors_on(:sources)
        agent.source_ids = [agents(:jane_weather_agent).id]
        expect(agent).to have(1).errors_on(:sources)
        agent.user = users(:jane)
        expect(agent).to have(0).errors_on(:sources)
      end
    
    When /^I fill out change password section with my password and '([^']*)' and '([^']*)'$/ do |new_pass, confirm_pass|
  fill_change_password_section(@me.password, new_pass, confirm_pass)
end
    
    Given /^I have been invited by an admin$/ do
  admin = FactoryGirl.create(:user)
  admin.invitation_code
  i = EmailInviter.new('new_invitee@example.com', admin)
  i.send!
end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
    desc 'list of authors'
task :authors, [:commit_range, :format, :sep] do |t, a|
  a.with_defaults :format => '%s (%d)', :sep => ', ', :commit_range => '--all'
  authors = Hash.new(0)
  blake   = 'Blake Mizerany'
  overall = 0
  mapping = {
    'blake.mizerany@gmail.com' => blake, 'bmizerany' => blake,
    'a_user@mac.com' => blake, 'ichverstehe' => 'Harry Vangberg',
    'Wu Jiang (nouse)' => 'Wu Jiang' }
  `git shortlog -s #{a.commit_range}`.lines.map do |line|
    line = line.force_encoding 'binary' if line.respond_to? :force_encoding
    num, name = line.split('\t', 2).map(&:strip)
    authors[mapping[name] || name] += num.to_i
    overall += num.to_i
  end
  puts '#{overall} commits by #{authors.count} authors:'
  puts authors.sort_by { |n,c| -c }.map { |e| a.format % e }.join(a.sep)
end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
        def frame_class(frame)
      if frame.filename =~ %r{lib/sinatra.*\.rb}
        'framework'
      elsif (defined?(Gem) && frame.filename.include?(Gem.dir)) ||
            frame.filename =~ %r{/bin/(\w+)\z}
        'system'
      else
        'app'
      end
    end
    
          private
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        # Perform the actual interpolation. Takes the pattern to interpolate
    # and the arguments to pass, which are the attachment and style name.
    # You can pass a method name on your record as a symbol, which should turn
    # an interpolation pattern for Paperclip to use.
    def self.interpolate pattern, *args
      pattern = args.first.instance.send(pattern) if pattern.kind_of? Symbol
      result = pattern.dup
      interpolators_cache.each do |method, token|
        result.gsub!(token) { send(method, *args) } if result.include?(token)
      end
      result
    end
    
      expansion(:attachments) {
    o.attachments.map do |attachment|
      {
        :filename => attachment.filename.to_s,
        :content_type => attachment.mime_type,
        :data => Base64.encode64(attachment.body.to_s),
        :size => attachment.body.to_s.bytesize,
        :hash => Digest::SHA1.hexdigest(attachment.body.to_s)
      }
    end
  }