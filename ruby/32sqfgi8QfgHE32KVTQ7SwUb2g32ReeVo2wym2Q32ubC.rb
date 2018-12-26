
        
                next unless path.file?
        file = path
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
        context 'after deleting a person' do
      before do
        user = FactoryGirl.create(:user_with_aspect)
        user.share_with(alice.person, user.aspects.first)
        user.person.delete
      end
    
          it 'keeps invalid params in form' do
        get :create, params: invalid_params
        expect(response.body).to match /jdoe@example.com/m
      end
    end
  end
end

    
    Given(/^I add a '(.*?)' processor in '(.*?)'$/) do |processor, directory|
  filename = '#{directory}/#{processor}.rb'
  cd('.') do
    FileUtils.mkdir_p directory
    File.open(filename, 'w') do |f|
      f.write(<<-CLASS)
        module Paperclip
          class #{processor.capitalize} < Processor
            def make
              basename = File.basename(file.path, File.extname(file.path))
              dst_format = options[:format] ? '.\#{options[:format]}' : ''
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
    require 'mimemagic'
require 'mimemagic/overlay'
require 'logger'
require 'terrapin'
    
        def initialize
      clear
    end