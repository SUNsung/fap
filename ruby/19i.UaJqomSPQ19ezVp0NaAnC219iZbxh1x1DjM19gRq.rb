
        
            desc 'Get the text for a specific license' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      requires :name, type: String, desc: 'The name of the template'
    end
    get 'templates/licenses/:name', requirements: { name: /[\w\.-]+/ } do
      template = TemplateFinder.build(:licenses, nil, name: params[:name]).execute
    
    module Gitlab
  module CryptoHelper
    extend self
    
            it { expect(presenter.can_resend_invite?).to eq(false) }
      end
    end
    
            desc 'Preview a badge from a #{source_type}.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::BasicBadgeDetails
        end
        params do
          requires :link_url, type: String, desc: 'URL of the badge link'
          requires :image_url, type: String, desc: 'URL of the badge image'
        end
        get ':id/badges/render' do
          authenticate!
    
    desc 'Move source to source.old, install source theme updates, replace source/_includes/navigation.html with source.old's navigation'
task :update_source, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('#{source_dir}.old')
    puts '## Removed existing #{source_dir}.old directory'
    rm_r '#{source_dir}.old', :secure=>true
  end
  mkdir '#{source_dir}.old'
  cp_r '#{source_dir}/.', '#{source_dir}.old'
  puts '## Copied #{source_dir} into #{source_dir}.old/'
  cp_r '#{themes_dir}/'+theme+'/source/.', source_dir, :remove_destination=>true
  cp_r '#{source_dir}.old/_includes/custom/.', '#{source_dir}/_includes/custom/', :remove_destination=>true
  cp '#{source_dir}.old/favicon.png', source_dir
  mv '#{source_dir}/index.html', '#{blog_index_dir}', :force=>true if blog_index_dir != source_dir
  cp '#{source_dir}.old/index.html', source_dir if blog_index_dir != source_dir && File.exists?('#{source_dir}.old/index.html')
  puts '## Updated #{source_dir} ##'
end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end