
        
                  # Reload so we have the latest data, then delete and save
          unlocked_reload
          @machines.delete(entry.id)
          unlocked_save
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
            # Registers a callback to be called when a specific action sequence
        # is run. This allows plugin authors to hook into things like VM
        # bootup, VM provisioning, etc.
        #
        # @param [String] name Name of the action.
        # @param [Symbol] hook_name The location to hook. If this isn't
        #   set, every middleware action is hooked.
        # @return [Array] List of the hooks for the given action.
        def self.action_hook(name, hook_name=nil, &block)
          # The name is currently not used but we want it for the future.
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          include Capistrano::DSL
    
            def respond_to_missing?(method, _include_all=false)
          @properties.key?(method) || super
        end
    
    ## -- Misc Configs -- ##
    
    module Jekyll
    
        def cache(gist, file, data)
      cache_file = get_cache_file_for gist, file
      File.open(cache_file, 'w') do |io|
        io.write data
      end
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end