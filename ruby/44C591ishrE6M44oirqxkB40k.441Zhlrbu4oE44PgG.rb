
        
          def grant_moderation!
    set_permission('moderator', true)
  end
    
    describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
        context 'GIT repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
          it 'raises an exception when xcode project path wasn't found' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_version_number(xcodeproj: '/nothere')
          end').runner.execute(:test)
        end.to raise_error('Could not find Xcode project')
      end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        def name=(value)
      @name = value.try :strip
    end
    
              node.css('.method').each do |n|
            next unless n.at_css('dt[id]')
            name = n.at_css('.descname').content
            name = '#{class_name}::#{name}()'
            id = n.at_css('dt[id]')['id']
            entries << [name, id]
          end
        end
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
            report_auth_info(s.merge({:active => false}))
        print_status('Failed IMAP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
        sessions[s[:session]].merge!({k => matches})
      end
    
        _cal[ver].each_pair do |key, value|
      cal[ver][key] = Array.new
      cal[ver][key] << String.new
      cal[ver][key][-1] << '#ifdef AIX%s' % ver.delete('.')
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '''.rjust(5)
      value.each_byte do |c|
        cal[ver][key][-1] << '\x%02x' % c
      end
      cal[ver][key][-1] << '''.ljust(7)
      cal[ver][key][-1] << '/*  cal     r2,-%d(r29)' %
          (65536 - value.unpack('nn')[1])
      cal[ver][key][-1] << '*/'.rjust(15)
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '#endif'
      cal[ver][key][-1] << '\n'
    end
    
      def execute
    validate_params
    source = File.join(File.dirname(__FILE__), 'templates', '#{type}-plugin')
    @target_path = File.join(path, full_plugin_name)
    FileUtils.mkdir(@target_path)
    puts ' Creating #{@target_path}'
    
      # Create a subclass of Clamp::Command that enforces the use of
  # LogStash::SETTINGS for setting validation
  class StrictCommand < Command
    class << self
      include ::Clamp::Option::StrictDeclaration
    end
    
          expect('.all-buttons-focus').to have_ruleset(ruleset)
    end
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'margin: 1px'