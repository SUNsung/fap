
        
          def fixopt(f)
    path = if f.linked_keg.directory? && f.linked_keg.symlink?
      f.linked_keg.resolved_path
    elsif f.prefix.directory?
      f.prefix
    elsif (kids = f.rack.children).size == 1 && kids.first.directory?
      kids.first
    else
      raise
    end
    Keg.new(path).optlink
  rescue StandardError
    raise '#{f.opt_prefix} not present or broken\nPlease reinstall #{f.full_name}. Sorry :('
  end
end
    
        if !updated
      puts 'Already up-to-date.'
    elsif hub.empty?
      puts 'No changes to formulae.'
    else
      hub.dump
      hub.reporters.each(&:migrate_tap_migration)
      hub.reporters.each(&:migrate_formula_rename)
      Descriptions.update_cache(hub)
    end
    
            # Registers a SIGINT handler. This typically is called from {busy}.
        # Callbacks are only registered once, so calling this multiple times
        # with the same callback has no consequence.
        def register(sig_callback)
          @@mutex.synchronize do
            registered << sig_callback
            registered.uniq!
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
          def initialize(string)
        @value = string
      end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Repackage < Vagrant.plugin('2', :command)
        def execute
          opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box repackage <name> <provider> <version>'
          end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
      Sass::Plugin.options.merge!(config)
    
    # usage rake isolate[my-post]
desc 'Move all other posts than the one currently being worked on to a temporary stash location (stash) so regenerating the site happens much more quickly.'
task :isolate, :filename do |t, args|
  stash_dir = '#{source_dir}/#{stash_dir}'
  FileUtils.mkdir(stash_dir) unless File.exist?(stash_dir)
  Dir.glob('#{source_dir}/#{posts_dir}/*.*') do |post|
    FileUtils.mv post, stash_dir unless post.include?(args.filename)
  end
end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
            def multiple_assignment_node
          grandparent_node = node.parent ? node.parent.parent : nil
          return nil unless grandparent_node
          return nil unless grandparent_node.type == MULTIPLE_ASSIGNMENT_TYPE
          return nil unless node.parent.type == MULTIPLE_LEFT_HAND_SIDE_TYPE
          grandparent_node
        end
      end
    end
  end
end

    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
            def autocorrect(node)
          lambda do |corrector|
            corrector.remove(node.loc.dot)
            corrector.remove(node.loc.selector)
          end
        end
    
            # @param annotated_source [String] string passed to the matchers
        #
        # Separates annotation lines from source lines. Tracks the real
        # source line number that each annotation corresponds to.
        #
        # @return [AnnotatedSource]
        def self.parse(annotated_source)
          source      = []
          annotations = []
    
                end
          RUBY
        end
      end
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
          private