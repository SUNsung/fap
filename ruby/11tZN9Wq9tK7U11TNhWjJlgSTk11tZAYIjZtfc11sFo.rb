
        
        def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
        puts 'GC Stats:'
    GC.start(full_mark: true, immediate_sweep: false)
    puts JSON.pretty_generate(GC.stat)
  end
end
    
        def filter(entries)
      entries.reject do |e|
        unless included?(e)
          special?(e) || backup?(e) || excluded?(e) || symlink?(e)
        end
      end
    end
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
        class CreateKeychainAction < Action
      def self.run(params)
        escaped_password = params[:password].shellescape
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
    File.readlines(sitelist).each do |site|
  site.strip!
  next if site.length == 0
  next if site =~ /^#/
    
    
    
    meterp.core.use('Stdapi')
    
    

    
        def missing_required_validator?
      (active_validator_classes.flat_map(&:ancestors) & Paperclip::REQUIRED_VALIDATORS).empty?
    end
    
            def description
          'validate the content types allowed on attachment #{@attachment_name}'
        end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end