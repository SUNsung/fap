
        
        module Gitlab
  module CryptoHelper
    extend self
    
        def find_by_filename(query)
      search_filenames(query).map do |filename|
        Gitlab::Search::FoundBlob.new(blob_filename: filename, project: project, ref: ref, repository: repository)
      end
    end
    
          it { expect(presenter.can_remove?).to eq(true) }
    end
    
          diff_file = subject.diff_files.find { |file| file.new_path == stub_path }
    
            desc 'Adds a badge to a #{source_type}.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::Badge
        end
        params do
          requires :link_url, type: String, desc: 'URL of the badge link'
          requires :image_url, type: String, desc: 'URL of the badge image'
        end
        post ':id/badges' do
          source = find_source_if_admin(source_type)
    
          def remember_location(key)
        location = caller.find do |line|
          IGNORED_LOCATIONS.none? { |i| line.include?(i) }
        end
        (locations[key] ||= []) << location
      end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
          it 'flashes a message containing the token' do
        post '/users/api_secrets', params: { api_secret: valid_params }
        expect(flash[:notice]).to include(ApiSecret.last.secret)
        expect(flash[:error]).to be_nil
      end
    end
    
      describe '.new' do
    let(:source) do
      'alias foo bar'
    end
    
          it 'returns true' do
        expect(node.pure?).to be(true)
      end
    end
    
              expect_offense(<<~RUBY)
            def some_method(foo, bar)
                                 ^^^ #{bar_message}
                            ^^^ #{foo_message}
            end
          RUBY
        end
      end
    end
    
    module RuboCop
  module Cop
    # Common functionality for checking assignment nodes.
    module CheckAssignment
      def on_lvasgn(node)
        check_assignment(node, extract_rhs(node))
      end
      alias on_ivasgn   on_lvasgn
      alias on_cvasgn   on_lvasgn
      alias on_gvasgn   on_lvasgn
      alias on_casgn    on_lvasgn
      alias on_masgn    on_lvasgn
      alias on_op_asgn  on_lvasgn
      alias on_or_asgn  on_lvasgn
      alias on_and_asgn on_lvasgn
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
        # Disable testing because we don't really need to run the cpan tests. The
    # goal is to see the parsed result (name, module description, etc)
    # Additionally, it fails on my workstation when cpan_test? is enabled due
    # to not finding `Test.pm`, and it seems like a flakey test if we keep this
    # enabled.
    subject.attributes[:cpan_test?] = false
    subject.input('Digest::MD5')
    insist { subject.name } == 'perl-Digest-MD5'
    insist { subject.description } == 'Perl interface to the MD-5 algorithm'
    insist { subject.vendor } == 'Gisle Aas <gisle@activestate.com>'
    # TODO(sissel): Check dependencies
  end
    
          # Scan to find the location of the two contiguous null records
      open(target_path, 'rb') do |file|
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
        attributes[:pleaserun_name] ||= File.basename(command.first)
    attributes[:prefix] ||= '/usr/share/pleaserun/#{attributes[:pleaserun_name]}'
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']