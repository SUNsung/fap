
        
                if Pathname::BOTTLE_EXTNAME_RX === file.to_s
          version = bottle_resolve_version(file) rescue file.version
        else
          version = file.version
        end
        next unless version
        next unless (name = file.basename.to_s[/(.*)-(?:#{Regexp.escape(version)})/, 1])
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
            def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
              waiter.jobs_remaining += 1
        end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
end
    
    When /^(?:|I )follow '([^']*)'$/ do |link|
  click_link(link)
end
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
          [ scale_geometry, crop_geometry ]
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end