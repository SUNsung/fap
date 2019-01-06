
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # @private
  def unused_options
    @options - @args
  end
    
        def self.cleanup_lockfiles
      return unless HOMEBREW_CACHE_FORMULA.directory?
      candidates = HOMEBREW_CACHE_FORMULA.children
      lockfiles  = candidates.select { |f| f.file? && f.extname == '.brewing' }
      lockfiles.each do |file|
        next unless file.readable?
        file.open.flock(File::LOCK_EX | File::LOCK_NB) && file.unlink
      end
    end
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
        root.children.sort.each do |pn|
      if pn.directory?
        dirs << pn
      elsif block_given? && yield(pn)
        puts pn
        other = 'other '
      else
        remaining_root_files << pn unless pn.basename.to_s == '.DS_Store'
      end
    end
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          context 'when specify output' do
        let(:command) { 'archive' }
    
          it 'Handles tag names with characters that need shell escaping' do
        tag = 'v1.8.0(30)'
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(between: ['#{tag}', 'HEAD'])
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
        context 'passing command arguments to the system' do
      it 'passes a string as a string' do
        expect_command('git commit')
        Fastlane::Actions.sh('git commit')
      end
    
              it 'prioritizes ENV values after CLI' do
            ENV['abc'] = 'val env'
            config_item = FastlaneCore::ConfigItem.new(key: :item, env_name: 'abc', default_value: 'val default')
            config = FastlaneCore::Configuration.create([config_item], {})
            config.config_file_options = { item: 'val config' }
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
          redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        private
    
        render_empty
  end
    
        true
  end
    
    require 'rex/proto/ipmi/utils'
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
    When /^I (?:sign|log) in as '([^']*)'( on the mobile website)?$/ do |email, mobile|
  @me = User.find_by_email(email)
  @me.password ||= 'password'
  automatic_login
  confirm_login mobile
end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
          it 'doesn't reduce number of available invites' do
        AppConfig.settings.enable_registrations = false
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end