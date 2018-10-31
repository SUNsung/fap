
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
        it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('Received <$.content.text.*> from <$.content.name> .') }.
        to raise_error('JSONPath '$.content.text.*' is too complex, please check your migration.')
    end
  end
    
          if first_warning
        $stderr.puts <<~EOS
          #{Tty.bold}Please note that these warnings are just used to help the Homebrew maintainers
          with debugging if you file an issue. If everything you use Homebrew for is
          working fine: please don't worry or file an issue; just ignore this. Thanks!#{Tty.reset}
        EOS
      end
    
        def to_s
      s = []
      s << 'Could not symlink #{src}'
      s << 'Target #{dst}' << suggestion
      s << <<~EOS
        To force the link and overwrite all conflicting files:
          brew link --overwrite #{keg.name}
    
          def self.visible
        false
      end
    end
  end
end

    
          alias generic_find_matching_tag find_matching_tag
    
      def parse(*paths)
    paths.flatten
         .compact
         .flat_map { |p| Pathname.new(p).to_path.split(File::PATH_SEPARATOR) }
         .uniq
  end
end

    
            last_simple_subject = rest.empty? && sseq.subject?
        if current_rule.nil? || first_sseq(current_rule).members != firsts ||
            !!first_sseq(current_rule).subject? != !!last_simple_subject
          current_rule = Tree::RuleNode.new([])
          current_rule.parsed_rules = make_sseq(last_simple_subject, *firsts)
        end
    
          offset = line.offset + line.text.size - arg_string.size
      args, keywords, splat, kwarg_splat =
        Script::Parser.new(arg_string.strip, @line, to_parser_offset(offset), @options).
          parse_mixin_include_arglist
      Tree::MixinNode.new(name, args, keywords, splat, kwarg_splat)
    end
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end