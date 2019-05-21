
        
              # Reads an integer from the cache, or returns nil if no value was found.
      #
      # See Caching.read for more information.
      def self.read_integer(raw_key, timeout: TIMEOUT)
        value = read(raw_key, timeout: timeout)
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      before_action :set_account
  respond_to :txt
    
      def update
    setting.data = params[:data]
    setting.save!
    
      private
    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end