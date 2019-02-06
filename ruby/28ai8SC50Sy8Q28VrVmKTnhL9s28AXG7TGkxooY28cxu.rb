
        
              # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
          # The base cache key to use for storing/retrieving issuable IDs.
      CACHE_KEY = 'github-import/issuable-finder/%{project}/%{type}/%{iid}'.freeze
    
            expose_attribute :iid, :title, :description, :source_branch,
                         :source_branch_sha, :target_branch, :target_branch_sha,
                         :milestone_number, :author, :assignee, :created_at,
                         :updated_at, :merged_at, :source_repository_id,
                         :target_repository_id, :source_repository_owner
    
        it 'does not send previously configured control targets when the current agent does not support them' do
      select_agent_type('Commander Agent')
      select2('SF Weather', from: 'Control targets')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No control targets')
      click_on 'Save'
      expect(page).to have_content('No control targets')
      agent = Agent.find_by(name: 'No control targets')
      expect(agent.control_targets).to eq([])
    end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
      GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
    file package(gem, '.gem') => ['pkg/', '#{directory + '/' + gem}.gemspec'] do |f|
      sh 'cd #{directory} && gem build #{gem}.gemspec'
      mv directory + '/' + File.basename(f.name), f.name
    end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
    require 'stringex'
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
      def migration_class_name
    migration_name.camelize
  end
    
        # The aspect ratio of the dimensions.
    def aspect
      width / height
    end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end