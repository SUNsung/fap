
        
          def test_symlink_exists(path)
    exists?('L', path)
  end
    
            private
    
          def trace_set(key)
        return unless fetch(:print_config_variables, false)
        puts 'Config variable set: #{key.inspect} => #{values[key].inspect}'
      end
    end
  end
end

    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
        flags = []
    args = []
    while rc_args.size > 0 do
      arg = rc_args.shift
      opt = self.class.find_option(arg)
      if opt and not opt.flag?
        flags.push(arg)
        flags.push(rc_args.shift)
      elsif opt or arg[0] == '-'
        flags.push(arg)
      else
        args.push(arg)
      end
    end
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      # This method is used by the puppet manifest template
  def puppetsort(hash)
    # TODO(sissel): Implement sorting that follows the puppet style guide
    # Such as, 'ensure' goes first, etc.
    return hash.to_a
  end # def puppetsort
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
        # Write the scripts, too.
    write_scripts
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar

    
        (@source.empty? || @target.empty? || options.name.empty?) &&
      abort('Must specify package name, source and output')
    
        return process.exit_code
  end # def execmd