
        
        def content_for(file)
  contents = File.read(file)
  case file
  when 'History.markdown'
    converted_history(contents)
  else
    contents.gsub(%r!\A# .*\n\n?!, '')
  end
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
      def self.require_universal_deps
    define_method(:require_universal_deps?) { true }
  end
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def preload_commit_authors
          # This also preloads the author of every commit. We're using 'lazy_author'
          # here since 'author' immediately loads the data on the first call.
          @pipeline.commit.try(:lazy_author)
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
            val.to_i if val.present?
      end
    
    module Gitlab
  module GithubImport
    module Representation
      class LfsObject
        include ToHash
        include ExposeAttribute
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
            format('%2$c', 1, 97).should == 'a'
        format('%2$p', 'a', []).should == '[]'
        format('%2$s', '-', 'abc').should == 'abc'
      end
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
          it 'raises TypeError if passed not Integer' do
        -> { warn '', uplevel: '' }.should raise_error(TypeError)
        -> { warn '', uplevel: [] }.should raise_error(TypeError)
        -> { warn '', uplevel: {} }.should raise_error(TypeError)
        -> { warn '', uplevel: Object.new }.should raise_error(TypeError)
      end
    end
  end
end

    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
          validate_plugins!
    end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end