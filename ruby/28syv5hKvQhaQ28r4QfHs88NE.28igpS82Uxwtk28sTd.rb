
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
      # @private
  def used_options
    @options & @args
  end
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
              builds = scope_relevant.select('count(*)').to_sql
          created = scope_relevant.created.select('count(*)').to_sql
          success = scope_relevant.success.select('count(*)').to_sql
          manual = scope_relevant.manual.select('count(*)').to_sql
          pending = scope_relevant.pending.select('count(*)').to_sql
          running = scope_relevant.running.select('count(*)').to_sql
          skipped = scope_relevant.skipped.select('count(*)').to_sql
          canceled = scope_relevant.canceled.select('count(*)').to_sql
          warnings = scope_warnings.select('count(*) > 0').to_sql
    
          # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
              unless matches
            raise(
              ArgumentError,
              'The note URL #{note.html_url.inspect} is not supported'
            )
          end
    
            attr_reader :attributes
    
          def gateway_error(exception)
        @order.errors.add(:base, exception.message)
        invalid_resource!(@order)
      end
    
            def new; end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
            def index
          @zones = Zone.accessible_by(current_ability, :read).order('name ASC').ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@zones)
        end