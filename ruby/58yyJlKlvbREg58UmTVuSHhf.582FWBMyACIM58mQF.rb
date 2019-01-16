
        
                sql = <<-SQL
          UPDATE ci_stages SET status = (#{status_sql})
            WHERE ci_stages.status IS NULL
            AND ci_stages.id BETWEEN #{start_id.to_i} AND #{stop_id.to_i}
        SQL
    
              relation.update_all(update)
        end
      end
    end
  end
end

    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
              unless matches
            raise(
              ArgumentError,
              'The note URL #{note.html_url.inspect} is not supported'
            )
          end
    
              hash = {
            iid: issue.number,
            title: issue.title,
            description: issue.body,
            milestone_number: issue.milestone&.number,
            state: issue.state == 'open' ? :opened : :closed,
            assignees: issue.assignees.map do |u|
              Representation::User.from_api_response(u)
            end,
            label_names: issue.labels.map(&:name),
            author: user,
            created_at: issue.created_at,
            updated_at: issue.updated_at,
            pull_request: issue.pull_request ? true : false
          }
    
              user = Representation::User.from_api_response(pr.user) if pr.user
          hash = {
            iid: pr.number,
            title: pr.title,
            description: pr.body,
            source_branch: pr.head.ref,
            target_branch: pr.base.ref,
            source_branch_sha: pr.head.sha,
            target_branch_sha: pr.base.sha,
            source_repository_id: pr.head&.repo&.id,
            target_repository_id: pr.base&.repo&.id,
            source_repository_owner: pr.head&.user&.login,
            state: pr.state == 'open' ? :opened : :closed,
            milestone_number: pr.milestone&.number,
            author: user,
            assignee: assignee,
            created_at: pr.created_at,
            updated_at: pr.updated_at,
            merged_at: pr.merged_at
          }
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        # Returns the extension of the file. e.g. 'jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension.
    def extension attachment, style_name
      ((style = attachment.styles[style_name.to_s.to_sym]) && style[:format]) ||
        File.extname(attachment.original_filename).sub(/\A\.+/, ''.freeze)
    end