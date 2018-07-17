
        
          bottle_ext = filename[bottle_native_regex, 1]
  bottle_url_ext = f.bottle.url[bottle_native_regex, 1]
    
          # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
      protected
    
        version 'Neko' do
      self.base_url = 'https://api.haxe.org/neko/'
    end
    
        def process_response?(response)
      !(response.body =~ REDIRECT_RGX || response.body =~ NOT_FOUND_RGX || response.body.blank?)
    end
  end
end

    
          super
    end
  end
end

    
    module Docs
  class PageDb
    attr_reader :pages
    
      # Version of your assets, change this if you want to expire all your assets.
  config.assets.version = '1.0'
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
        # Returns the scaling and cropping geometries (in string-based ImageMagick format)
    # neccessary to transform this Geometry into the Geometry given. If crop is true,
    # then it is assumed the destination Geometry will be the exact final resolution.
    # In this case, the source Geometry is scaled so that an image containing the
    # destination Geometry would be completely filled by the source image, and any
    # overhanging image would be cropped. Useful for square thumbnail images. The cropping
    # is weighted at the center of the Geometry.
    def transformation_to dst, crop = false
      if crop
        ratio = Geometry.new( dst.width / self.width, dst.height / self.height )
        scale_geometry, scale = scaling(dst, ratio)
        crop_geometry         = cropping(dst, ratio, scale)
      else
        scale_geometry        = dst.to_s
      end
    
            protected
    
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
