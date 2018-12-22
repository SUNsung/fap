
        
        describe GroupUser do
    
          it 'adds output param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            output: '~/Desktop'
          )
        end').runner.execute(:test)
    
            expect(result).to eq('git commit -m message #{'./fastlane/*.md'.shellescape} ./LICENSE')
      end
    
          it 'yields any error result' do
        expect_command('ls', '-la', exitstatus: 1)
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to be_empty
        end
      end
    
      # https://stackoverflow.com/a/18623297/252627, last variant
  require 'open3'
  Open3.popen3(compare_command) do |stdin, stdout, stderr, thread|
    error = stderr.read.chomp
    # expect(error).to eq(expected_compare_error)
    expect(error).to eq(expected_compare_error) # match(/#{expected_compare_error}/)
  end
end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
          # Returns the details of a GitHub user.
      #
      # username - The username of the user.
      def user(username)
        with_rate_limit { octokit.user(username) }
      end
    
          # project - An instance of `Project`.
      # client - An instance of `Gitlab::GithubImport::Client`.
      # parallel - When set to true the objects will be imported in parallel.
      def initialize(project, client, parallel: true)
        @project = project
        @client = client
        @parallel = parallel
        @page_counter = PageCounter.new(project, collection_method)
        @already_imported_cache_key = ALREADY_IMPORTED_CACHE_KEY %
          { project: project.id, collection: collection_method }
      end
    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: 'MergeRequest',
            noteable_id: matches[:iid].to_i,
            file_path: note.path,
            commit_id: note.commit_id,
            diff_hunk: note.diff_hunk,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
            # Builds an issue from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the issue
        #         details.
        def self.from_api_response(issue)
          user =
            if issue.user
              Representation::User.from_api_response(issue.user)
            end
    
            expose_attribute :iid, :title, :description, :source_branch,
                         :source_branch_sha, :target_branch, :target_branch_sha,
                         :milestone_number, :author, :assignee, :created_at,
                         :updated_at, :merged_at, :source_repository_id,
                         :target_repository_id, :source_repository_owner
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      # Controllers inheriting DeviseController are advised to override this
  # method so that other controllers inheriting from them would use
  # existing translations.
  def translation_scope
    'devise.#{controller_name}'
  end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
            # Called to change the hostname of the virtual machine.
        def change_host_name(name)
          raise BaseError, _key: :unsupported_host_name
        end
      end
    end
  end
end

    
      it_behaves_like 'any rack application'