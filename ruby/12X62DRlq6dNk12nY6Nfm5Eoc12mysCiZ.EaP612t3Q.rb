
        
                if routes &&
           (routes.named_routes.route_defined?(selector) ||
             routes.mounted_helpers.method_defined?(selector))
          @controller.__send__(selector, *args)
        else
          super
        end
      end
    
        test 'response_body value is wrapped in an array when the value is a String' do
      controller = BareController.new
      controller.set_request!(ActionDispatch::Request.empty)
      controller.set_response!(BareController.make_response!(controller.request))
      controller.index
      assert_equal ['Hello world'], controller.response_body
    end
    
        test 'middleware that is 'use'd is called as part of the Rack application' do
      result = @app.call(env_for('/'))
      assert_equal ['Hello World'], [].tap { |a| result[2].each { |x| a << x } }
      assert_equal 'Success', result[1]['Middleware-Test']
    end
    
          text.split.each do |word|
        if sentences.first.present? && (sentences.last + [word]).join(' ').length > len
          sentences << [word]
        else
          sentences.last << word
        end
      end
    
    class ActiveSupport::TestCase
  include ActiveSupport::Testing::MethodCallAssertions
    
        def call(env)
      @stack.call(env)
    end
  end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file  --out=build/cloc.txt')
      end
    end
  end
end

    
          protected
    
                o.on('-f', '--force', 'Remove without confirmation.') do |f|
              options[:force] = f
            end
    
          th = Thread.new do
        data = ''
        64.times do |i|
          data << i.to_s
          f.rewind
          f.print data
          f.truncate(data.bytesize)
          q1.push data.bytesize
          q2.pop
        end
        q1.push nil
      end
    
                def replace(enum)
              @keys = nil
              super
            end
    
      def test_delete
    set = Set[1,2,3]
    
      it 'decodes the remaining floats when passed the '*' modifier after another directive' do
    array = '\x9a\x99\xa9@33\x13A'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end
    
      it 'decodes the remaining ints when passed the '*' modifier after another directive' do
    'dcbahgfe'.unpack(unpack_format()+unpack_format('*')).should == [1684234849, 1751606885]
  end
    
      it 'cannot be rescued' do
    thread = Thread.new do
      begin
        Thread.current.send(@method)
      rescue Exception
        ScratchPad.record :in_rescue
      end
     ScratchPad.record :end_of_thread_block
    end
    
        t.join
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          if path.extname == '.la'
        path.unlink
      elsif path.basename.to_s == 'perllocal.pod'
        # Both this file & the .packlist one below are completely unnecessary
        # to package & causes pointless conflict with other formulae. They are
        # removed by Debian, Arch & MacPorts amongst other packagers as well.
        # The files are created as part of installing any Perl module.
        path.unlink
      elsif path.basename.to_s == '.packlist' # Hidden file, not file extension!
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if executable_path?(path)
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end
    
        if ARGV.include?('--new-issue') || ARGV.switch?('n')
      url = create_issue(f.tap, '#{f.name} failed to build on #{MacOS.full_version}', url)
    end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        # Initializes a new CategoryIndex.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'index.html'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_layouts'), 'category_index.html')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
    