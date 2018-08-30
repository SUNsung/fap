
        
            # Releases a local lock on a machine. This does not acquire any locks
    # so make sure to lock around it.
    #
    # @param [String] id
    def unlocked_release(id)
      lock_file = @machine_locks[id]
      if lock_file
        lock_file.close
        begin
          File.delete(lock_file.path)
        rescue Errno::EACCES
          # Another process is probably opened it, no problem.
        end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
    Given /^a user with username '([^']*)' is connected with '([^']*)'$/ do |arg1, arg2|
  user1 = User.where(:username => arg1).first
  user2 = User.where(:username => arg2).first
  connect_users(user1, user1.aspects.where(:name => 'Besties').first, user2, user2.aspects.where(:name => 'Besties').first)
end
    
    if Encoding.default_external != Encoding::UTF_8
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        alias :empty? :empty_file?