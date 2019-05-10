
        
        module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
              # Register the command
          components.commands.register(name.to_sym) do
            [block, opts]
          end
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
    RSpec.describe 'CommentMutes', type: :request do
  let(:original_commenter)                      { create(:user) }
  let(:other_commenter)                         { create(:user) }
  let(:article)                                 { create(:article) }
  let(:parent_comment_by_og)                    { create(:comment, commentable: article, user: original_commenter) }
  let(:child_of_parent_by_other)              { create(:comment, commentable: article, user: other_commenter, ancestry: parent_comment_by_og.id.to_s) }
  let(:child_of_child_by_og)                { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child_of_child_of_child_by_other)  { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}') }
  let(:child_of_child_of_child_by_og)     { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}/#{child_of_child_by_other.id}') }
  let(:child_of_child_by_other)             { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child2_of_child_of_child_by_og) { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_other.id}') }
  let(:parent_comment_by_other) { create(:comment, commentable: article, user: other_commenter) }