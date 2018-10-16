
        
              Dir.chdir(FastlaneCore::FastlaneFolder.path || Dir.pwd) do # context: fastlane subfolder
        # create nice path that we want to print in case of some problem
        relative_path = path.nil? ? '(eval)' : Pathname.new(path).relative_path_from(Pathname.new(Dir.pwd)).to_s
    
        context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --ignore \'ignored/path\' --exit-threshold \'2\' input/dir')
      end
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            keychain_password: '#{password}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}'
          })
        end').runner.execute(:test)
      end
    
              expect(value).to eq(987)
        end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    Then(/^I should not be able to sign up$/) do
  confirm_not_signed_up
end
    
        sign_in(alice, scope: :user)
  end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
      # Returns a url without the protocol (http://)
  def shorthand_url(input)
    input.gsub /(https?:\/\/)(\S+)/ do
      $2
    end
  end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        def self.teardown(&block)
      define_method(:teardown, &block)
    end
  end
  (
  class << klass;
    self
  end).send(:define_method, :name) { name.gsub(/\W/, '_') }
  $contexts << klass
  klass.class_eval &block
end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
end

    
      setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
  end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
    LogStash::Bundler.setup!
    
        # To make sure we have the maximum compatibility
    # we will ignore theses gems and they won't be included in the pack
    IGNORE_GEMS_IN_PACK = %w(
      logstash-core
      logstash-core-plugin-api
      jar-dependencies
    )
    
    Gem::Specification.new do |gem|
  gem.authors       = ['Elastic']
  gem.email         = ['info@elastic.co']
  gem.description   = %q{Logstash plugin API}
  gem.summary       = %q{Define the plugin API that the plugin need to follow.}
  gem.homepage      = 'http://www.elastic.co/guide/en/logstash/current/index.html'
  gem.license       = 'Apache License (2.0)'
    
      it 'returns the merged `ConfigPart#config_string`' do
    expect(subject.config_string).to eq(ordered_config_parts.collect(&:text).join('\n'))
  end
    
    platforms = PlatformConfig.new
    
        after :each do
      logstash.uninstall
    end