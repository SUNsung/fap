
        
                  @bar3 = Agents::DotBar.new(name: 'bar3').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @bar2
            agent.save!
          },
        ]
        @foo.reload
        @bar2.reload
    
            subject.file = StringIO.new(invalid_data)
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
      end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
        private
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def base_url
      @base_url ||= URL.parse self.class.base_url
    end
    
          def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
    desc 'preview the site in a web browser'
task :preview do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts 'Starting to watch source with Jekyll and Compass. Starting Rack on port #{server_port}'
  system 'compass compile --css-dir #{source_dir}/stylesheets' unless File.exist?('#{source_dir}/stylesheets/screen.css')
  jekyllPid = Process.spawn({'OCTOPRESS_ENV'=>'preview'}, 'jekyll build --watch')
  compassPid = Process.spawn('compass watch')
  rackupPid = Process.spawn('rackup --port #{server_port}')
    
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
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      s.add_dependency 'erubis', '~> 2.6'
  s.add_dependency 'thor', '~> 0.19', '>= 0.15.0'
  s.add_dependency 'xdg', '~> 2.2', '>= 2.2.5'
    
      factory :project_with_deprecations, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample.deprecations.yml') }
    end
    
      chain :with do |attrs|
    @expected_attrs = attrs
  end
    
        context '$EDITOR is not set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { nil }
      end