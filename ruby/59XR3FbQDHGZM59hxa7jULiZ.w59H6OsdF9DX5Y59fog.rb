
        
            # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
      def merge(*args)
    @settings.merge(*args)
    self
  end
    
        # Remove unresolved symlinks
    symlinks.reverse_each do |s|
      s.unlink unless s.resolved_path_exists?
    end
  end
    
    class PrettyListing
  def initialize(path)
    Pathname.new(path).children.sort_by { |p| p.to_s.downcase }.each do |pn|
      case pn.basename.to_s
      when 'bin', 'sbin'
        pn.find { |pnn| puts pnn unless pnn.directory? }
      when 'lib'
        print_dir pn do |pnn|
          # dylibs have multiple symlinks and we don't care about them
          (pnn.extname == '.dylib' || pnn.extname == '.pc') && !pnn.symlink?
        end
      else
        if pn.directory?
          if pn.symlink?
            puts '#{pn} -> #{pn.readlink}'
          else
            print_dir pn
          end
        elsif Metafiles.list?(pn.basename.to_s)
          puts pn
        end
      end
    end
  end
    
          return false if self.runner.lanes.fetch(nil, {}).fetch(key.to_sym, nil)
      return true if self.runner.lanes[key.to_sym].kind_of?(Hash)
    
    module FastlaneCore
  class AnalyticsSession
    GA_TRACKING = 'UA-121171860-1'
    
        def rescue_connection_failed_error(e)
      if e.message.include?('Connection reset by peer - SSL_connect')
        handle_tls_error!(e)
      else
        handle_unknown_error!(e)
      end
    end
    
            message = '#{grouping}/test/#{specified_build_number} (fastlane)'
        tag = '#{grouping}/test/#{specified_build_number}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-cert-issuer \'Some issuer\' --exit-threshold \'2\' input/dir')
      end
    
          it 'Does not accept an invalid value for :merge_commit_filtering' do
        values = Fastlane::Actions::GIT_MERGE_COMMIT_FILTERING_OPTIONS.map { |o| ''#{o}'' }.join(', ')
        error_msg = 'Valid values for :merge_commit_filtering are #{values}'
    
          context 'when specify output_file options' do
        it 'adds redirect file to command' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              output_file: '#{output_file}'
            )
          end').runner.execute(:test)
    
        # Determines the defined data type of this ConfigItem
    def data_type
      if @data_type.kind_of?(Symbol)
        nil
      elsif @data_type
        @data_type
      else
        (@is_string ? String : nil)
      end
    end
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
          # @param cache_location [String] see \{#cache\_location}
      def initialize(cache_location)
        @cache_location = cache_location
      end
    
        # Create a {Sass::Selector::CommaSequence} containing only a single
    # {Sass::Selector::Sequence} which in turn contains only a single
    # {Sass::Selector::SimpleSequence}.
    #
    # @param subject [Boolean] Whether this is a subject selector
    # @param sseqs [Array<Sass::Selector::Sequence, String>]
    # @return [Sass::Selector::CommaSequence]
    def make_sseq(subject, *sseqs)
      make_seq(Sass::Selector::SimpleSequence.new(sseqs, subject))
    end
    
        # Returns the standard exception backtrace,
    # including the Sass backtrace.
    #
    # @return [Array<String>]
    def backtrace
      return nil if super.nil?
      return super if sass_backtrace.all? {|h| h.empty?}
      sass_backtrace.map do |h|
        '#{h[:filename] || '(sass)'}:#{h[:line]}' +
          (h[:mixin] ? ':in `#{h[:mixin]}'' : '')
      end + super
    end