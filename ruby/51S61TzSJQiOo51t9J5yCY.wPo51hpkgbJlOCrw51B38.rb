  # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
        version '2' do
      self.release = '2.3.0'
      self.base_url = 'http://coffeescript.org/'
    
          html_filters.push 'd3/clean_html', 'd3/entries_v4'
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
      def test_getc_extended_file
    [nil, {:textmode=>true}, {:binmode=>true}].each do |mode|
      Tempfile.create('test-extended-file', mode) {|f|
        assert_nil(f.getc)
        f.print 'a'
        f.rewind
        assert_equal(?a, f.getc, 'mode = <#{mode}>')
      }
    end
  end
    
      Ruby = Struct.new(:version, :platform)
    
    module Patch
  def self.create(strip, src, &block)
    case strip
    when :DATA
      DATAPatch.new(:p1)
    when String
      StringPatch.new(:p1, strip)
    when Symbol
      case src
      when :DATA
        DATAPatch.new(strip)
      when String
        StringPatch.new(strip, src)
      else
        ExternalPatch.new(strip, &block)
      end
    when nil
      raise ArgumentError, 'nil value for strip'
    else
      raise ArgumentError, 'unexpected value #{strip.inspect} for strip'
    end
  end
    
        def output_disabled(dependency, new_dependency = dependency)
      odisabled ''depends_on :#{dependency}'',
                ''depends_on \'#{new_dependency}\'''
    end
  end
    
    class PostgresqlRequirement < Requirement
  fatal true
  satisfy do
    odisabled('PostgresqlRequirement', ''depends_on \'postgresql\''')
  end
end
    
      # The message to show when the requirement is not met.
  def message
    _, _, class_name = self.class.to_s.rpartition '::'
    s = '#{class_name} unsatisfied!\n'
    if cask
      s += <<~EOS
        You can install with Homebrew-Cask:
         brew cask install #{cask}
      EOS
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
          # Skip this file if the output file is the same size
      if entry.directory?
        FileUtils.mkdir_p(path) unless File.directory?(path)
      else
        entry_mode = entry.instance_eval { @mode } & 0777
        if File.exists?(path)
          stat = File.stat(path)
          # TODO(sissel): Submit a patch to archive-tar-minitar upstream to
          # expose headers in the entry.
          entry_size = entry.instance_eval { @size }
          # If file sizes are same, skip writing.
          next if stat.size == entry_size && (stat.mode & 0777) == entry_mode
        end
        puts 'Extracting #{entry.full_name} from #{tarball} #{entry_mode.to_s(8)}'
        File.open(path, 'w') do |fd|
          # eof? check lets us skip empty files. Necessary because the API provided by
          # Archive::Tar::Minitar::Reader::EntryStream only mostly acts like an
          # IO object. Something about empty files in this EntryStream causes
          # IO.copy_stream to throw 'can't convert nil into String' on JRuby
          # TODO(sissel): File a bug about this.
          while !entry.eof?
            chunk = entry.read(16384)
            fd.write(chunk)
          end
            #IO.copy_stream(entry, fd)
        end
        File.chmod(entry_mode, path)
      end
    end
    tar.close
    File.unlink(tarball) if File.file?(tarball)
  end # def untar