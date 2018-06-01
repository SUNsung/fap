
        
        describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
            expect(result).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
          it 'increments the build number of the Xcode project' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
    
    {      delta = 1
      stat = File.stat(path)
      assert_in_delta tb,   stat.birthtime.to_f, delta
      assert_in_delta t0+2, stat.mtime.to_f, delta
      if stat.birthtime != stat.ctime
        assert_in_delta t0+4, stat.ctime.to_f, delta
      end
      if /mswin|mingw/ !~ RUBY_PLATFORM && !Bug::File::Fs.noatime?(path)
        # Windows delays updating atime
        assert_in_delta t0+6, stat.atime.to_f, delta
      end
    }
  rescue NotImplementedError
  end
    
      it 'does not decode an int when fewer bytes than an int remain and the '*' modifier is passed' do
    'abc'.unpack(unpack_format('*')).should == []
  end
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
        10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep1.should == false # t should be blocked on the first sleep
    t.send(@method)
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
    
    
    #keytool = clsKeyTool
#jarsigner = clsJarSigner
    
    class Parser
  def initialize(filename)
    @src = Source.new(filename)
  end
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file