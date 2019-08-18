
        
          def setup
    # enable a logger so that (e.g.) the benchmarking stuff runs, so we can get
    # a more accurate simulation of what happens in 'real life'.
    super
    @controller.logger = ActiveSupport::Logger.new(nil)
  end
    
          def publish(name, *args)
        notifier.publish(name, *args)
      end
    
            attr_reader :symbol
    
            def select_directory(file_name)
          @categories.keys.find do |category|
            File.exist?(File.join(category_directory(category), file_name))
          end
        end
      end
    end
  end
end

    
            def find(key)
          file_name = '#{key}#{@extension}'
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
      def output_chronic_duration_attribute(source_attribute)
    value = attributes[source_attribute.to_s]
    ChronicDuration.output(value, format: :short) if value
  end
end

    
              find_every_method_call_by_name(body_node, :xcodebuild).each do |m|
            next if parameters_passed?(m, /SYMROOT=/)
    
        it 'deprecated ENV.universal_binary usage' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          if build?
             ENV.universal_binary
             ^^^^^^^^^^^^^^^^^^^^ macOS has been 64-bit only since 10.6 so ENV.universal_binary is deprecated.
          end
        end
      RUBY
    end
    
      describe '#display_s' do
    context 'without specific version' do
      its(:display_s) { is_expected.to eq('java') }
    end
    
        def languages
      @languages ||= [
        *ARGV.value('language')&.split(','),
        *ENV['HOMEBREW_LANGUAGES']&.split(','),
        *Open3.capture2('defaults', 'read', '-g', 'AppleLanguages')[0].scan(/[^ \n'(),]+/),
      ].uniq
    end
    
        def downloader
      @downloader ||= begin
        strategy = DownloadStrategyDetector.detect(cask.url.to_s, cask.url.using)
        strategy.new(cask.url.to_s, cask.token, cask.version, cache: Cache.path, **cask.url.specs)
      end
    end
    
          return unless @cask.sourcefile_path
    
          it 'adds the appropriate curl args' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['-d', 'form=data'])
          expect(args.each_cons(2)).to include(['-d', 'is=good'])
        }
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
          def ==(other)
        self.class == other.class &&
            spec == other.spec &&
            used_by_non_library_targets_only? == other.used_by_non_library_targets_only?
      end
    end
  end
end

    
              # Prints a warning informing the user that a build configuration of
          # the integrated target is overriding the CocoaPods build settings.
          #
          # @param  [Target::AggregateTarget] pod_bundle
          #         The Pods bundle.
          #
          # @param  [XcodeProj::PBXNativeTarget] target
          #         The native target.
          #
          # @param  [Xcodeproj::XCBuildConfiguration] config
          #         The build configuration.
          #
          # @param  [String] key
          #         The key of the overridden build setting.
          #
          def self.print_override_warning(pod_bundle, target, config, key)
            actions = [
              'Use the `$(inherited)` flag, or',
              'Remove the build settings from the target.',
            ]
            message = 'The `#{target.name} [#{config.name}]` ' \
              'target overrides the `#{key}` build setting defined in ' \
              '`#{pod_bundle.pod_bundle.xcconfig_relative_path(config.name)}'. ' \
              'This can lead to problems with the CocoaPods installation'
            UI.warn(message, actions)
          end
    
            it 'adds the developer frameworks search paths to the xcconfig if XCTest has been detected' do
          xcconfig = BuildSettings.new(stub('Target'))
          xcconfig.stubs(:frameworks => %w(XCTest))
          frameworks_search_paths = xcconfig.framework_search_paths
          frameworks_search_paths.should == %w($(PLATFORM_DIR)/Developer/Library/Frameworks)
        end
    
            # @return [PodfileDependencyCache] the cache of all dependencies in the podfile.
        #
        attr_reader :podfile_dependency_cache
    
          def title
        @page.title
      end
    
          def title
        'Latest Changes (Globally)'
      end
    
    def commit_details
  { :message => 'Did something at #{Time.now}',
    :name    => 'Tom Preston-Werner',
    :email   => 'tom@github.com' }
end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def taxon
          @taxon ||= taxonomy.taxons.accessible_by(current_ability, :show).find(params[:id])
        end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    end