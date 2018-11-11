
        
          def outbox_presenter
    if page_requested?
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account, page_params),
        type: :ordered,
        part_of: account_outbox_url(@account),
        prev: prev_page,
        next: next_page,
        items: @statuses
      )
    else
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account),
        type: :ordered,
        size: @account.statuses_count,
        first: account_outbox_url(@account, page: true),
        last: account_outbox_url(@account, page: true, min_id: 0)
      )
    end
  end
    
          redirect_to admin_report_path(@report)
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
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
          super
    end
    
          def warn_add_git_to_capfile
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] Future versions of Capistrano will not load the Git SCM
plugin by default. To silence this deprecation warning, add the following to
your Capfile after `require 'capistrano/deploy'`: