
        
                  def instantiate_builder(builder_class, item, value, text, html_options)
            builder_class.new(@template_object, @object_name, @method_name, item,
                              sanitize_attribute_name(value), text, value, html_options)
          end
    
        class WithConditionalOverrideFlippedAndInheriting < WithConditionalOverride
      layout nil, only: :non_overwritten
    end
    
      describe '#std?' do
    it 'returns true if the environment contains :std' do
      env << :std
      expect(env).to be_std
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
    
      end
    
      # Handle architecture naming conversion:
  # <osname>:<osversion>:<arch>:<wordsize>[.other]
  def architecture
    osname    = %x{uname -s}.chomp
    osversion = %x{uname -r}.chomp.split('.').first
    
    # Use an OS X pkg built with pkgbuild.
#
# Supports input and output. Requires pkgbuild and (for input) pkgutil, part of a
# standard OS X install in 10.7 and higher.
class FPM::Package::OSXpkg < FPM::Package
    
    end
    
      option '--name', 'SERVICE_NAME', 'The name of the service you are creating'
  option '--chdir', 'CHDIR', 'The working directory used by the service'
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
          self
    end # def add_symlink
  end
end

    
    When /^(?:|I )uncheck '([^']*)'$/ do |field|
  uncheck(field)
end
    
      def self.io_adapters
    @io_adapters ||= Paperclip::AdapterRegistry.new
  end
    
        def define_flush_errors
      @klass.send(:validates_each, @name) do |record, attr, value|
        attachment = record.send(@name)
        attachment.send(:flush_errors)
      end
    end